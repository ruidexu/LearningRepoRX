//--------------------------------------------------------------------

	/*
	//initialize output
	ifstream b_file;
	//opens output
	b_file.open("coordinate.txt");

	if (!b_file)
	{
		//if a_file returns not 1, the open command failed
		cout << "No joy";

		//the program is killed
		exit(-1);
	}
	else
	{
		cout<<"In Connect"<<"\n";

	}

	int count = 0;
	float pairs[n];

	while(!b_file.eof())
	{
		b_file >> pairs[count];
		count++;
	}

	//closes output
	b_file.close();
	*/

//--------------------------------------------------------------------
	
	/*
	vector<double> xvec;
	vector<double> yvec;
	float numin = 0;

	for ( int i = 0; i < n; i++)
	{
		xvec[i] = pairs[2*i];
		yvec[i] = pairs[2*i+1];
		float mag = sqrt(pow(xvec[i],2)+pow(yvec[i],2));
		if (mag <= 1)
		{
			numin++;
		}
		else
		{
			numin = numin;
		}
	}
	
	cout << numin << "\n";
	float pi_est = (4*static_cast<float> (numin))/static_cast<float> (n);
	cout << "pi is estimated to be "<< pi_est << "\n";
	*/

	/*
	for ( int i = 0; i < n; i++)
	{
		cout << xarr[i]<<" ";
		cout << yarr[i];
	}
	*/