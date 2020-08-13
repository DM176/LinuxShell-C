#include<iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stack>
using namespace std;


int main()
{
 char **private_files=new char *[100];
 char **stack_array=new char *[100];
 int stack_index=99;
stack_array[stack_index]=new char [30];
 for(int i=0;i<100;i++)
 {
	private_files[i]=new char[50];
	private_files[i][0]='\0';
 }
 int index=0;
	char *input=new char[50];
	char *current=new char[30];
	char temp[100]; 
	char *directory=new char[50];
	int k=0,x=0;
	while(true)
	{
				 getcwd(temp, 100);
				//cout<<s<<endl;
				for(int i=0;i<100 && temp[i]!='\0' ;i++)
				{
					if(temp[i]=='/')
					{
						k=0;		
					}
					current[k]=temp[i];	
					k++;
				}	
				current[k]='\0';
				//cout<<directory<<endl;			
						int x=0;
						while(current[x]!='\0')
						{
							temp[x]=current[x+1];
							x++;
						}
				//cout<<temp<<endl;
		cout<<"l174307-"<<current <<">";
		int i=0;;
		cin.getline(input,50);	
		//for(int i=0;i<50;i++)
		{
			char pass[10];
			
			if(input[i]=='p' && input[i+1]=='o' && input[i+2]=='p' && input[i+3]=='-')
			{
				//if(input[i+4]=='s' && input[i+5]=='h' &&	input[i+6]=='o' &&	input[i+7]=='w')
				{
					//cout<<stack_index;
				//	if(input[i+8]=='t' && input[i+9]=='o' &&	input[i+10]=='p')
					{
						if(stack_index!=99)
						{
								cout<<endl<<stack_array[stack_index+1]<<endl;
								/*k=0;
								for(int i=0;i<100 && stack_array[stack_index+1+i]!='\0' ;i++)
								{
									if(stack_array[stack_index+1][i]=='/')
									{
										k=0;		
									}
									current[k]=stack_array[stack_index+1][i];	
									k++;
								}	
								current[k]='\0';
								cout<<current<<endl;
							*/
						}
						else
						{
							cout<<"no item in stack"<<endl;
						}
					}
				}	
			}
			else if(input[i]=='p' && input[i+1]=='o' && input[i+2]=='p' )
			{
				if(stack_index!=99)
				{
					stack_index++;
					
					for(int i=0;i<20;i++)
					{
						chdir("..");
					}
					//cout<<stack_array[stack_index];
					chdir(stack_array[stack_index]);
					stack_array[stack_index]=NULL;
					delete [] stack_array[stack_index];
					
				}
				else
				{
					cout<<"no item in stack"<<endl;
				}
			}
			else if(input[i]=='p' && input[i+1]=='u' && input[i+2]=='s' && input[i+3]=='h')
			{
						int o=5;
						while(input[o]!='\0')
						{
							o++;
						}
						o++;
						char *temp_arr=new char[o];
						for(int h=0;h<o;h++)
						{
							temp_arr[h]=input[h+5];
						}
			
			
						 o=0;

						//while(current[o]!='\0')
						char temp5[100];
						 getcwd(temp5, 100);
						//cout<<temp5<<endl;
						 while(temp5[o]!='\0')
						{
							o++;
						}
						o++;
						stack_array[stack_index]=new char[o];
						for(int h=0;h<o;h++)
						{
							stack_array[stack_index][h]=temp5[h];
						}
						//cout<<stack_array[stack_index]<<endl;
						int ret=chdir(temp_arr);
						if(ret==-1)
						{
							stack_index++;	
						}
								
						stack_index--;
			}
			
			else if(input[i+4]=='p' && input[i+5]=='r' && input[i+6]=='i' && input[i+7]=='v' && input[i+8]=='a' && input[i+9]=='t' && input[i+10]=='e') 
			{
				if(input[i]=='l' && input[i+1]=='s' && input[i+2]==' ' && input[i+3]=='-')
				{
				
					cout<<"Enter Password"<<endl;
					cin.getline(pass,10);
					
					int fd=creat("ls.txt",S_IRUSR|S_IWUSR);
							int copy=dup(1);
							dup2(fd,1);
							pid_t pid=fork();
								if(pid==0)
								{
									chdir("..");
									execlp("/bin/ls","ls",temp,NULL);
								}
								else
								{
									wait(NULL);
									chdir(current);
									int fd=open("ls.txt",S_IRUSR);
									dup2(copy,1);
									char * buf=new char[1000];						
									int size=read	(fd,buf,1000);
									int temp_count=0;
									char *file=new char[30];
									bool found=true;
									int w=0;
									int y=0;
									//int d=0;
								//cout<<"hi"<<endl;
								int c=0;
									while(buf[w]!='\0')
									{
										c=w;
										while(buf[w]!='\n')
										{
											//cout<<"infinite"<<endl;
											file[y]=buf[w];
									        w++;
											y++;
										}
										file[y]='\0';
										w++;
										int s=y;
										y=0;
										//cout<<file<<endl;
										found=true;
										for(int d=0;d<index;d=d+2)
										{
												found=true;
												for(int f=0;f<s && found==true;f++)
												{
		//cout<<private_files[2];											
														if(private_files[d][f]!=file[f])
														{
															//cout<<" "<<private_files[0]<< " "<<file<<" "<<f<<" ";
															//cout<<"galt"<<endl;
															found=false;
														}
												}
												cout<<endl;
											if(found==true)
											{
												for(int h=c;h<w;h++)
												{
													buf[h]=' ';
												}
													//cout<<file<<endl;
											}
										}
									//	d=d+2;
									}
									cout<<buf;
								}
					
					
					
					bool found=true;
					int u=0;
					for(int y=1;y<index;y=y+2)
					{
						 u=0;
						 found=true;
						while(pass[u]!='\0' && found==true)
						{
							if(pass[u]!=private_files[y][u])
							{
								found=false;
							}
							u++;
						}
						if(found==true)
						{
							cout<<private_files[y-1]<<endl;
						}
					}
					
				}
				else
				{
					cout<<"error"<<endl;
				}
			}
			else if(input[i]=='p' && input[i+1]=='r' && input[i+2]=='i' && input[i+3]=='v' && input[i+4]=='a' && input[i+5]=='t' && input[i+6]=='e')
			{
						int j=0;
					    for( j=i+8;(input[j]!='\0' ) && j<50 ;j++)
						{
								directory[j-8]=input[j];					
						}	
						directory[j-8]='\0';					
						{
							int fd=creat("ls.txt",S_IRUSR|S_IWUSR);
							int copy=dup(1);
							dup2(fd,1);
							
							pid_t pid=fork();
								if(pid==0)
								{
									chdir("..");
									execlp("/bin/ls","ls",temp,NULL);
								}
								else
								{
									wait(NULL);
									chdir(current);
									int fd=open("ls.txt",S_IRUSR);
									dup2(copy,1);
									char * buf=new char[1000];						
									int size=read	(fd,buf,1000);				
									bool found=true;
									for(int k=0;k<size;k++)
									{
											if(buf[k]==directory[0])
											{
												int s1=k;
												int s2=0;
												found=true;
												while(s2<j-8)
												{
													//cout<<" "<<buf[s1]<<" "<<directory[s2]<<" "<<"check";
													if(buf[s1]!=directory[s2])
													{
														found=false;
													}
													s2++;
													s1++;
													//cout<<s2;

												}
												//cout<<"res"<<found<<endl;
												
														if(found==true)
														{
															cout<<"Enter Password : "<<endl;
															cin.getline(pass,10);
															cout<<"file secured"<<endl;
															int a=0;
															while(directory[a]!='\0')
															{
																private_files[index][a]=directory[a];
																a++;
															}
															private_files[index][a]='\0';
															index=index+1;
															a=0;
															while(pass[a]!='\0')
															{
																private_files[index][a]=pass[a];
																a++;
															}
															private_files[index][a]='\0';
															index=index+1;
														}
														
														
											}
									}
								}
							
						}
						for(int r=0;r<index;r++)
						{
							cout<<private_files[r]<<endl;
						}
			
			}
			else if(input[i]=='l' && input[i+1]=='s')
			{
				int fd=creat("ls.txt",S_IRUSR|S_IWUSR);
							int copy=dup(1);
							dup2(fd,1);
							pid_t pid=fork();
								if(pid==0)
								{
									chdir("..");
									execlp("/bin/ls","ls",temp,NULL);
								}
								else
								{
									wait(NULL);
									chdir(current);
									int fd=open("ls.txt",S_IRUSR);
									dup2(copy,1);
									char * buf=new char[1000];						
									int size=read	(fd,buf,1000);
									int temp_count=0;
									char *file=new char[30];
									bool found=true;
									int w=0;
									int y=0;
									//int d=0;
								//cout<<"hi"<<endl;
								int c=0;
									while(buf[w]!='\0')
									{
										c=w;
										while(buf[w]!='\n')
										{
											//cout<<"infinite"<<endl;
											file[y]=buf[w];
									        w++;
											y++;
										}
										file[y]='\0';
										w++;
										int s=y;
										y=0;
										//cout<<file<<endl;
										found=true;
										for(int d=0;d<index;d=d+2)
										{
												found=true;
												for(int f=0;f<s && found==true;f++)
												{
		//cout<<private_files[2];											
														if(private_files[d][f]!=file[f])
														{
															//cout<<" "<<private_files[0]<< " "<<file<<" "<<f<<" ";
															//cout<<"galt"<<endl;
															found=false;
														}
												}
												cout<<endl;
											if(found==true)
											{
												for(int h=c;h<w;h++)
												{
													buf[h]=' ';
												}
													//cout<<file<<endl;
											}
										}
									//	d=d+2;
									}
									cout<<buf;
								}
			}
			else if(input[i]=='p' && input[i+1]=='w' && input[i+2]=='d')
			{
				  char s[100]; 
			         getcwd(s, 100);
				cout<<endl<<s<<endl;
				/*int k=0;
				for(int i=0;i<100;i++)
				{
					if(s[i]=='/' && s[i+1]=='a' && s[i+2]=='s' && s[i+3]=='s')
					{
						k=i;	
					}
					
				}
				char s2[100];
				int z=0;
				for(int i=k;i<100;i++)
				{
					s2[z]=s[i];
					z++;
				}
   				cout<<s2<<endl;
					*/
			}
			else if(input[i]=='c' && input[i+1]=='d')
			{
				
						int j=0;
					    for( j=i+3;(input[j]!='\0' ) && j<50 ;j++)
						{
								directory[j-3]=input[j];
								//cout<<j	
						}	
						directory[j-3]='\0';
						//cout<<j-3<<directory<<endl;
							
						if(directory[0]=='.' && directory[1]=='.' && directory[2]==	'\0')
						{
							chdir("..");
						}
						else
						{								
									chdir(directory);														
						}
		    }
			else
			{
				//cout<<st.pop();
				cout<<"Error : Invalid command"<<endl;
			}
		}
	}		
}